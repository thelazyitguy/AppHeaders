//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapCloudConfig.h"

@class NSArray, NSDictionary;

@interface AMapFlowControlConfig : AMapCloudConfig
{
    NSArray *_blockConfig;
    NSDictionary *_domainMaps;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *domainMaps; // @synthesize domainMaps=_domainMaps;
@property(readonly, nonatomic) NSArray *blockConfig; // @synthesize blockConfig=_blockConfig;
- (id)initWithCloudConfig:(id)arg1;

@end

