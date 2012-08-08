//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <MessageUI/MessageUI.h>

#import "SVModalWebViewController.h"

@interface SVWebViewController : UIViewController

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithAddress:(NSString *)urlString andPostBody:(NSString*)postData;
- (id)initWithURL:(NSURL*)URL;
- (id)initWithURL:(NSURL *)pageURL andPostBody:(NSString*)postData;

@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, copy) NSArray *applicationActivities;
@property (nonatomic, readwrite) BOOL alwaysShowNavigationBar;

@property (nonatomic, weak) NSString *postBody;

@end
