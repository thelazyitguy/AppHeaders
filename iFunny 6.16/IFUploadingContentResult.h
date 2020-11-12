//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface IFUploadingContentResult : NSObject
{
    unsigned long long _uploadContentType;
    NSString *_url;
    NSString *_contentId;
    NSString *_contentType;
    NSArray *_contentTags;
    NSData *_contentData;
    NSData *_videoData;
    NSMutableDictionary *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSData *videoData; // @synthesize videoData=_videoData;
@property(copy, nonatomic) NSData *contentData; // @synthesize contentData=_contentData;
@property(copy, nonatomic) NSArray *contentTags; // @synthesize contentTags=_contentTags;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned long long uploadContentType; // @synthesize uploadContentType=_uploadContentType;
- (id)initWithUploadContentType:(unsigned long long)arg1;

@end
