//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubRemoteContentOperationURLResolver-Protocol.h"

@class NSString, NSURL;

@interface SPTChartHubRemoteURLResolver : NSObject <SPTHubRemoteContentOperationURLResolver>
{
    NSURL *_chartURI;
}

+ (id)apiPathForURI:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *chartURI; // @synthesize chartURI=_chartURI;
- (id)resolveContentURL;
- (id)initWithURI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

