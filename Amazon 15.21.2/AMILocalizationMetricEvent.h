//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AMILocalizationMetricEvent : NSObject
{
    NSString *_name;
    NSDictionary *_metaData;
    NSString *_marketplace;
}

@property(retain) NSString *marketplace; // @synthesize marketplace=_marketplace;
@property(retain) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 andMarketplace:(id)arg2 andMetaData:(id)arg3;

@end
