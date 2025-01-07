# Hack Type Error: Passing String to Function Expecting Optional Integer

This example demonstrates a subtle type error in Hack that can occur when passing a string to a function expecting an optional integer.  The type system doesn't catch this at compile time, leading to a runtime error.

## Problem

The `foo` function expects an optional integer (`?int`). While it correctly handles `null` input, it fails when passed a string.  This should ideally be a compile-time error, but Hack allows this potentially problematic input.

## Solution

The solution involves adding explicit type checking to handle potential string inputs and to enforce type safety.  The solution example adds a check to ensure the input `x` is an integer before proceeding. This will now throw a compile-time error if a string is passed. 