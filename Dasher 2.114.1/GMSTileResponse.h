//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol GMSTile;

@interface GMSTileResponse : NSObject
{
    id <GMSTile> _tile;
    NSData *_cachableData;
}

+ (id)failure;
+ (id)responseWithTile:(id)arg1 cachableData:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *cachableData; // @synthesize cachableData=_cachableData;
@property(retain, nonatomic) id <GMSTile> tile; // @synthesize tile=_tile;

@end
