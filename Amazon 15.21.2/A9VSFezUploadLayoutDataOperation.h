//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSFezRoomServiceOperation.h"

@class A9VSFezRoomLayout, NSData;

@interface A9VSFezUploadLayoutDataOperation : A9VSFezRoomServiceOperation
{
    A9VSFezRoomLayout *_layout;
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) A9VSFezRoomLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (id)makeRequest;
- (id)initWithLayout:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
