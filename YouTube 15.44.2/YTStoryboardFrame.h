//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface YTStoryboardFrame : NSObject
{
    UIImage *_mosaic;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) UIImage *mosaic; // @synthesize mosaic=_mosaic;
- (id)initWithMosaic:(id)arg1 rect:(struct CGRect)arg2;

@end

