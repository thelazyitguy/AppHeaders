//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC14AmazonChimeSDK14VideoTileState : NSObject
{
    // Error parsing type: , name: tileId
    // Error parsing type: , name: attendeeId
    // Error parsing type: , name: videoStreamContentWidth
    // Error parsing type: , name: videoStreamContentHeight
    // Error parsing type: , name: pauseState
    // Error parsing type: , name: isLocalTile
    // Error parsing type: , name: isContent
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTileId:(long long)arg1 attendeeId:(id)arg2 videoStreamContentWidth:(long long)arg3 videoStreamContentHeight:(long long)arg4 pauseState:(long long)arg5 isLocalTile:(_Bool)arg6;
@property(nonatomic, readonly) _Bool isContent; // @synthesize isContent;
@property(nonatomic, readonly) _Bool isLocalTile; // @synthesize isLocalTile;
@property(nonatomic) long long pauseState; // @synthesize pauseState;
@property(nonatomic) long long videoStreamContentHeight; // @synthesize videoStreamContentHeight;
@property(nonatomic) long long videoStreamContentWidth; // @synthesize videoStreamContentWidth;
@property(nonatomic, readonly) NSString *attendeeId;
@property(nonatomic, readonly) long long tileId; // @synthesize tileId;

@end
