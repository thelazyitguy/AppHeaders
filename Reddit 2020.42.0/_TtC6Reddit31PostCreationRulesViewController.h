//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AnalyticsEvent, NSString;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_, _TtP6Reddit39PostCreationRulesViewControllerDelegate_;

@interface _TtC6Reddit31PostCreationRulesViewController : UIViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: subreddit
    // Error parsing type: , name: subredditPlaceholderImage
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: spinner
    // Error parsing type: , name: tableView
    // Error parsing type: , name: iconImageView
    // Error parsing type: , name: button
    // Error parsing type: , name: navigationBarBackdropView
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)buttonPressed;
- (void)spinnerPressed;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic, readonly) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(nonatomic, readonly) AnalyticsEvent *screenViewEvent;
@property(nonatomic, readonly) NSString *analyticsScreenViewName;
@property(nonatomic, readonly) NSString *analyticsPageType;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubreddit:(id)arg1 subredditPlaceholderImage:(id)arg2 accountContext:(id)arg3;
@property(nonatomic) __weak id <_TtP6Reddit39PostCreationRulesViewControllerDelegate_> delegate; // @synthesize delegate;

@end

