//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBDOGImage;

@interface SBDOGMetaData : NSObject
{
    NSString *_title;
    NSString *_url;
    NSString *_desc;
    SBDOGImage *_defaultImage;
}

@property(readonly, nonatomic) SBDOGImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(readonly, copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_toDictionary;
- (id)initWithDictionary:(id)arg1;

@end
