//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/GMUCluster-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface GMUStaticCluster : NSObject <GMUCluster>
{
    NSMutableArray *_items;
    struct CLLocationCoordinate2D _position;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D position; // @synthesize position=_position;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithPosition:(struct CLLocationCoordinate2D)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

