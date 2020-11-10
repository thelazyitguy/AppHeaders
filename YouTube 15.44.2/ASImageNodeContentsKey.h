//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface ASImageNodeContentsKey : NSObject
{
    _Bool _isOpaque;
    UIImage *_image;
    UIColor *_backgroundColor;
    CDUnknownBlockType _willDisplayNodeContentWithRenderingContext;
    CDUnknownBlockType _didDisplayNodeContentWithRenderingContext;
    CDUnknownBlockType _imageModificationBlock;
    struct CGSize _backingSize;
    struct CGRect _imageDrawRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType imageModificationBlock; // @synthesize imageModificationBlock=_imageModificationBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayNodeContentWithRenderingContext; // @synthesize didDisplayNodeContentWithRenderingContext=_didDisplayNodeContentWithRenderingContext;
@property(copy, nonatomic) CDUnknownBlockType willDisplayNodeContentWithRenderingContext; // @synthesize willDisplayNodeContentWithRenderingContext=_willDisplayNodeContentWithRenderingContext;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property _Bool isOpaque; // @synthesize isOpaque=_isOpaque;
@property struct CGRect imageDrawRect; // @synthesize imageDrawRect=_imageDrawRect;
@property struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

