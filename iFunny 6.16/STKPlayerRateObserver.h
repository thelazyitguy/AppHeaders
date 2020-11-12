//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer;
@protocol STKPlayerRateObserverDelegate;

@interface STKPlayerRateObserver : NSObject
{
    AVPlayer *_observerItem;
    id <STKPlayerRateObserverDelegate> _delegate;
}

+ (id)observerWith:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <STKPlayerRateObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak AVPlayer *observerItem; // @synthesize observerItem=_observerItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end
