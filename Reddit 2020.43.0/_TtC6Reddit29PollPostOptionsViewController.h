//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray;
@protocol _TtP18AnalyticsFramework26AnalyticsScreenViewContext_;

@interface _TtC6Reddit29PollPostOptionsViewController : UIViewController
{
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: onNewOptionCreated
    // Error parsing type: , name: type
    // Error parsing type: , name: optionsCount
    // Error parsing type: , name: minOptions
    // Error parsing type: , name: maxOptions
    // Error parsing type: , name: minDuration
    // Error parsing type: , name: maxDuration
    // Error parsing type: , name: container
    // Error parsing type: , name: addOptionButton
    // Error parsing type: , name: durationButton
    // Error parsing type: , name: selectedDragIndex
    // Error parsing type: , name: durationInDays
    // Error parsing type: , name: expirationDate
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onDragEndWithOptionView:(id)arg1;
- (void)onDragMoveWithOptionView:(id)arg1 snapshot:(id)arg2 translation:(struct CGPoint)arg3;
- (void)setKeyboardFocus;
- (void)configureWithPost:(id)arg1;
@property(nonatomic, readonly) id <_TtP18AnalyticsFramework26AnalyticsScreenViewContext_> analyticsContext;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountContext:(id)arg1;
@property(nonatomic, readonly) double endTimestamp;
@property(nonatomic) long long durationInDays; // @synthesize durationInDays;
@property(nonatomic) long long type; // @synthesize type;
@property(nonatomic, readonly) _Bool isValid;
@property(nonatomic, readonly) NSArray *options;
@property(nonatomic, copy) CDUnknownBlockType onNewOptionCreated;

@end

