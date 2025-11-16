// Import Firebase SDKs
import { initializeApp } from "https://www.gstatic.com/firebasejs/10.8.0/firebase-app.js";
import { getAuth, signInWithEmailAndPassword, GoogleAuthProvider, signInWithPopup }
from "https://www.gstatic.com/firebasejs/10.8.0/firebase-auth.js";

// Your Firebase config (PASTE YOUR OWN CONFIG HERE)
const firebaseConfig = {
  apiKey: "AIzaSyBEEtsWKeYxs4Ft6LrAyw3K4Gkfugq8wAY",
  authDomain: "student-performance-trac-5327d.firebaseapp.com",
  projectId: "student-performance-trac-5327d",
  storageBucket: "student-performance-trac-5327d.firebasestorage.app",
  messagingSenderId: "260306341156",
  appId: "1:260306341156:web:e47a56419434bf2f41b7b1",
  measurementId: "G-EWWZWM4BV7"
};


// Initialize Firebase
const app = initializeApp(firebaseConfig);
const auth = getAuth(app);

// 🔹 Handle Login Form Submit
document.querySelector(".login-form").addEventListener("submit", async (e) => {
  e.preventDefault();

  const email = document.getElementById("email").value;
  const password = document.getElementById("password").value;
  const role = document.getElementById("role").value;

  try {
    const userCredential = await signInWithEmailAndPassword(auth, email, password);

    // Save role locally (optional)
    localStorage.setItem("userRole", role);
    localStorage.setItem("loggedInUser", email);

    alert("Login successful!");

    // Redirect to your dashboard page
    window.location.href = "index.html"; // change to your dashboard file

  } catch (error) {
    alert("Login failed: " + error.message);
  }
});

// 🔹 Google Login
document.querySelector(".google-btn").addEventListener("click", async () => {
  const provider = new GoogleAuthProvider();

  try {
    const result = await signInWithPopup(auth, provider);

    // Get user email
    const userEmail = result.user.email;

    // Save login status
    localStorage.setItem("loggedInUser", userEmail);

    alert("Logged in with Google!");
    window.location.href = "index.html";

  } catch (error) {
    alert("Google login failed: " + error.message);
  }
});
