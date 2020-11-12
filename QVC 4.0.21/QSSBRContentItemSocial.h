//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSSEntity.h"

@class NSString;

@interface QSSBRContentItemSocial : QSSEntity
{
    unsigned long long _platform;
    NSString *_authorName;
    NSString *_authorHandle;
    NSString *_authorAvatarURLString;
    NSString *_displayText;
    NSString *_displayDate;
    NSString *_displayImageURLString;
    NSString *_targetURL;
}

+ (id)identifierForPlatform:(unsigned long long)arg1;
+ (unsigned long long)isSupportedPlatform:(id)arg1;
+ (id)supportedPlatforms;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(retain, nonatomic) NSString *displayImageURLString; // @synthesize displayImageURLString=_displayImageURLString;
@property(retain, nonatomic) NSString *displayDate; // @synthesize displayDate=_displayDate;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(retain, nonatomic) NSString *authorAvatarURLString; // @synthesize authorAvatarURLString=_authorAvatarURLString;
@property(retain, nonatomic) NSString *authorHandle; // @synthesize authorHandle=_authorHandle;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
- (id)initWithDictionary:(id)arg1;

@end
