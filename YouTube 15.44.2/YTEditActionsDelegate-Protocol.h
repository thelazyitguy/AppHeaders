//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol YTEditFeatureUI;

@protocol YTEditActionsDelegate <NSObject>
- (void)didTapForward;
- (void)didTakeAction:(id)arg1;
- (void)didChangeFeature:(id <YTEditFeatureUI>)arg1 previousFeature:(id <YTEditFeatureUI>)arg2;
- (void)expandingFeature:(id <YTEditFeatureUI>)arg1;
@end
