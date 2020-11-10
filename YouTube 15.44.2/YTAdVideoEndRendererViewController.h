//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTAdVideoEndProtocol-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSArray, NSString, NSTimer;
@protocol YTAdVideoEndRendererDelegate, YTAdVideoEndRendererProtocol, YTResponder;

@interface YTAdVideoEndRendererViewController : UIViewController <YTResponder, YTAdVideoEndProtocol>
{
    UIViewController<YTAdVideoEndRendererProtocol> *_currentVideoEndViewController;
    double _currentTime;
    double _videoEndRenderersTime;
    NSArray *_videoEndViewControllers;
    int _playerViewLayout;
    id <YTResponder> _parentResponder;
    id <YTAdVideoEndRendererDelegate> _delegate;
    GIMMe *_gimme;
    NSTimer *_timer;
}

+ (id)createControllersWithAdVideoEndRenderer:(id)arg1 parentResponder:(id)arg2 gimme:(id)arg3;
+ (double)calculateTime:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTAdVideoEndRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int playerViewLayout; // @synthesize playerViewLayout=_playerViewLayout;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)performCircularReveal:(id)arg1 forView:(id)arg2;
- (void)performFadeIn:(id)arg1 forView:(id)arg2;
- (void)performTransition:(id)arg1 onView:(id)arg2;
- (id)adVideoEndView;
- (void)incrementTimer;
- (void)invalidateTimer;
- (void)loadView;
- (void)start;
@property(readonly, nonatomic) _Bool skipIfMinimized;
@property(readonly, nonatomic) _Bool hasAdVideoEndRenderers;
- (id)initWithAdVideoEndRenderer:(id)arg1 parentResponder:(id)arg2;
- (id)initWithPlayerResponse:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

