//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IAAdRequest, IAMediation, IAUnitController;

@protocol IAAdSpotBuilder <NSObject>
@property(copy, nonatomic) IAMediation *mediationType;
@property(copy) IAAdRequest *adRequest;
- (void)addSupportedUnitController:(IAUnitController *)arg1;
@end
