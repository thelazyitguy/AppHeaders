//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSx_ISVGDocument : NSObject
{
    struct SVGDocument *_document;
}

- (id)imageWithSize:(struct CGSize)arg1 styleSheet:(id)arg2;
- (id)imageWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) struct CGSize size;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

