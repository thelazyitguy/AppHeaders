//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSFezRoomServiceOperation.h"

@class A9VSFezRoom;

@interface A9VSFezDownloadRoomScienceDataOperation : A9VSFezRoomServiceOperation
{
    A9VSFezRoom *_room;
}

@property(retain, nonatomic) A9VSFezRoom *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (id)makeRequest;
- (id)initWithRoom:(id)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
