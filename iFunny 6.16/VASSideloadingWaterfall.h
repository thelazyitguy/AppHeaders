//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/VASWaterfall-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface VASSideloadingWaterfall : NSObject <VASWaterfall>
{
    NSMutableArray *_playlistItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *playlistItems; // @synthesize playlistItems=_playlistItems;
@property(readonly) NSDictionary *metadata;
@property(readonly) NSArray *waterfallItems;
- (void)addItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
