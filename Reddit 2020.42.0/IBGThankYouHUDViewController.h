//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IBGThankYouHUDView, NSTimer;

@interface IBGThankYouHUDViewController : UIViewController
{
    CDUnknownBlockType _dismissHandler;
    IBGThankYouHUDView *_thankYouHUDView;
    NSTimer *_timer;
}

@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) IBGThankYouHUDView *thankYouHUDView; // @synthesize thankYouHUDView=_thankYouHUDView;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void).cxx_destruct;
- (void)dismiss;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDismissHandler:(CDUnknownBlockType)arg1;

@end

