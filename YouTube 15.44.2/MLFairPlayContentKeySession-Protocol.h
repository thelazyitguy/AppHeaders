//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class AVURLAsset, NSObject, NSString;
@protocol MLFairPlayContentKeySessionDelegate, OS_dispatch_queue;

@protocol MLFairPlayContentKeySession <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(nonatomic) __weak id <MLFairPlayContentKeySessionDelegate> delegate;
- (void)terminate;
- (void)makeRequestWithIdentifier:(NSString *)arg1;
- (void)setFairPlayAsset:(AVURLAsset *)arg1;
@end

