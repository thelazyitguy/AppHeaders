//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCORClientConfiguration.h"

@class NSString;

@interface SCORPublisherConfiguration : SCORClientConfiguration
{
    shared_ptr_70a56b18 _deviceIdListener;
}

+ (id)publisherConfigurationWithBuilderBlock:(CDUnknownBlockType)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *publisherId;
- (id)initWithBuilder:(id)arg1;
- (id)initWithCppClientConfiguration:(shared_ptr_3f1925d0)arg1 listener:(shared_ptr_70a56b18)arg2;

@end
