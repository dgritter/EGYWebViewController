//
//  EGYWebViewController.h
//
//  Created by Mokhles Hussien on 29.08.2013.
//  Copyright 2013 iMokhles. All rights reserved.
//
//  https://github.com/iMokhles/EGYWebViewController

#import <MessageUI/MessageUI.h>
#import <objc/runtime.h>
#import <Foundation/Foundation.h>
#import "EGYModalWebViewController.h"

#define USE_WEBKIT_DEFAULT YES

#ifdef __IPHONE_8_0
@import WebKit;
#endif

// #define deprecated __attribute__((deprecated))
#define noreturn __attribute__((noreturn)) void
#define unused __attribute__((unused))

@interface EGYWebViewController : UIViewController
#ifdef __IPHONE_8_0
<WKUIDelegate, WKNavigationDelegate>

- (instancetype)initWithAddress:(NSString *)urlString usingWebkit:(BOOL)usingWebkit;
- (instancetype)initWithURL:(NSURL*)pageURL usingWebkit:(BOOL)usingWebkit;
#endif

- (instancetype)initWithAddress:(NSString*)urlString;
- (instancetype)initWithURL:(NSURL*)URL;

- (void)loadURL:(NSURL*)URL;

@property (nonatomic, strong) UIColor *barsTintColor;
@property (nonatomic, strong) UIColor *barItemsTintColor;

#ifdef __IPHONE_8_0
// Option to use webkit over UIWebview. Default YES
@property (nonatomic, assign, readonly) BOOL usingWebkit;
#endif

// Fixing @selector warning.
- (void)doneButtonClicked:(UIBarButtonItem*)sender;
@end
