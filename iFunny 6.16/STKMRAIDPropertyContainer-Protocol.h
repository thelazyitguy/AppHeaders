//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class STKMRAIDExpandProperties, STKMRAIDOrientationProperties, STKMRAIDResizeProperties;

@protocol STKMRAIDPropertyContainer <NSObject>
@property(readonly, nonatomic) STKMRAIDOrientationProperties *orientationProperties;
@property(readonly, nonatomic) STKMRAIDExpandProperties *expandProperties;
@property(readonly, nonatomic) STKMRAIDResizeProperties *resizeProperties;
- (void)updateOrientationProperties:(STKMRAIDOrientationProperties *)arg1;
- (void)updateExpandProperties:(STKMRAIDExpandProperties *)arg1;
- (void)updateResizeProperties:(STKMRAIDResizeProperties *)arg1;
@end
