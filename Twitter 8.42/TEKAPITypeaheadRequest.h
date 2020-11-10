//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterExtensionKit/TEKAPIRequest.h>

@class NSString, NSURL;

@interface TEKAPITypeaheadRequest : TEKAPIRequest
{
    NSURL *_URL;
    NSString *_query;
    unsigned long long _count;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)configuration;
- (id)parameters;
- (id)endpointPath;
- (id)typeaheadType;
- (id)initWithQuery:(id)arg1;

@end

