//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VKOperation.h>

@class VKRequest, VKUploadPhotoBase;

@interface VKUploadImageOperation : VKOperation
{
    VKUploadPhotoBase *_uploadRequest;
    VKRequest *_lastLoadingRequest;
}

+ (id)operationWithUploadRequest:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) VKRequest *lastLoadingRequest; // @synthesize lastLoadingRequest=_lastLoadingRequest;
@property(retain, nonatomic) VKUploadPhotoBase *uploadRequest; // @synthesize uploadRequest=_uploadRequest;
- (void)cancel;
- (void)finish;
- (void)start;

// Remaining properties
@property(nonatomic) long long state; // @dynamic state;

@end
