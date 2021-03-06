//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSFezRoomServiceOperation.h"

@class A9VSFezRoomLayout, A9VSFezRoomView, NSData;

@interface A9VSFezUploadLayoutDataAndViewThumbnailOperation : A9VSFezRoomServiceOperation
{
    A9VSFezRoomLayout *_layout;
    NSData *_data;
    A9VSFezRoomView *_view;
    NSData *_thumbnail;
}

@property(readonly, nonatomic) NSData *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) A9VSFezRoomView *view; // @synthesize view=_view;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) A9VSFezRoomLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (id)makeRequest;
- (id)initWithLayout:(id)arg1 data:(id)arg2 view:(id)arg3 thumbnail:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

