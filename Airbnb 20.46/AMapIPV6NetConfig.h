//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapCloudConfig.h"

@class NSNumber, NSString;

@interface AMapIPV6NetConfig : AMapCloudConfig
{
    NSNumber *_downgradeThreshold;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSNumber *downgradeThreshold; // @synthesize downgradeThreshold=_downgradeThreshold;
- (id)initWithCloudConfig:(id)arg1;

@end

