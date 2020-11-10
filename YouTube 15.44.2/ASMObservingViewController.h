//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/ASMConsumableObserver-Protocol.h>
#import <Module_Framework/ASMObserver-Protocol.h>

@class NSMutableArray;

@interface ASMObservingViewController : UIViewController <ASMConsumableObserver, ASMObserver>
{
    _Bool _paused;
    NSMutableArray *_subscriptions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void)resumeSubscriptions;
- (void)pauseSubscriptions;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)observe:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeConsumable:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
