//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, UIImage;

@interface GSCImageCacheItem : NSObject
{
    unsigned long long _holdCount;
    _Bool _forceReleased;
    GSCImageCacheItem *_previous;
    GSCImageCacheItem *_next;
    UIImage *_image;
    NSData *_imageData;
    unsigned long long _memorySize;
    NSString *_key;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool forceReleased; // @synthesize forceReleased=_forceReleased;
@property(nonatomic) __weak GSCImageCacheItem *next; // @synthesize next=_next;
@property(nonatomic) __weak GSCImageCacheItem *previous; // @synthesize previous=_previous;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) unsigned long long memorySize; // @synthesize memorySize=_memorySize;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)updateSize;
- (void)updateImage:(id)arg1 withData:(id)arg2;
- (void)invalidateImageData;
- (void)forceRelease;
- (_Bool)unHold;
- (void)hold;
@property(readonly, nonatomic) _Bool discardable;
- (id)initWithKey:(id)arg1 image:(id)arg2 imageData:(id)arg3;

@end
