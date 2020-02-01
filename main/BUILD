load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "get-main",
    srcs = ["get-main.cc"],
    hdrs = ["get-main.h"],
)

cc_binary(
    name = "hello-friends",
    srcs = ["main.cc"],
    deps = [
        ":get-main",
        "//lib:get-time",
    ],
)
