//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/StoreObservation.h>

@class NSDictionary;

@interface KeyValueStoreObservation : StoreObservation
{
    NSDictionary *_values;
}

+ (id)computeValuesOfInstance:(id)arg1 forKeyPaths:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *values; // @synthesize values=_values;
- (id)initWithIdentifier:(id)arg1 instance:(id)arg2 keyPaths:(id)arg3 options:(unsigned long long)arg4 queue:(id)arg5 observer:(CDUnknownBlockType)arg6;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType observer; // @dynamic observer;

@end

