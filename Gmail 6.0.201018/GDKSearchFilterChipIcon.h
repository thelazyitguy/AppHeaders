//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface GDKSearchFilterChipIcon : NSObject
{
    _Bool _roundable_9;
    UIImage *_image_5;
    UIColor *_tintColor_9;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool roundable; // @synthesize roundable=_roundable_9;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor_9;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image_5;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithImage:(id)arg1 tintColor:(id)arg2 roundable:(_Bool)arg3;

@end
