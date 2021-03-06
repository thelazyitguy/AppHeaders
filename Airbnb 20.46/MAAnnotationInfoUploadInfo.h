//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface MAAnnotationInfoUploadInfo : NSObject <NSCopying>
{
    NSDictionary *_infoDic;
    double _latitude;
    double _longitude;
    NSString *_title;
    NSString *_subTitle;
}

@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)equalTo:(id)arg1;
- (id)dictionary;
- (id)initWithMAAnnotation:(id)arg1;

@end

