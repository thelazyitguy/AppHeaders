//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingNetworkSource.h"

@interface ContactNetworkSource : ListingNetworkSource
{
}

- (id)defaultParameters;
- (void)processObjects:(id)arg1 currentCount:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)contactsFromData:(id)arg1;
- (void)parseMoreData:(id)arg1;
- (void)parseData:(id)arg1;
- (_Bool)shouldProcessURLs;
- (id)initWithService:(id)arg1 fetchURLString:(id)arg2;

@end
