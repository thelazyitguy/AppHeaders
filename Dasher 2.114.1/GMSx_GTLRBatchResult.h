//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GTLRObject.h>

@class NSDictionary;

@interface GMSx_GTLRBatchResult : GMSx_GTLRObject
{
    NSDictionary *_successes;
    NSDictionary *_failures;
    NSDictionary *_responseHeaders;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain) NSDictionary *failures; // @synthesize failures=_failures;
@property(retain) NSDictionary *successes; // @synthesize successes=_successes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
