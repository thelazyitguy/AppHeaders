//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface GKSFIFEImageURLOptions : NSObject
{
    _Bool _silhouette;
    _Bool _monogram;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _size;
    long long _crop;
    NSNumber *_version;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(nonatomic) _Bool monogram; // @synthesize monogram=_monogram;
@property(nonatomic) _Bool silhouette; // @synthesize silhouette=_silhouette;
@property(nonatomic) long long crop; // @synthesize crop=_crop;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (_Bool)isEqual:(id)arg1;

@end

