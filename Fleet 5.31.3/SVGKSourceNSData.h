//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Persona/SVGKSource.h>

@class NSData, NSURL;

@interface SVGKSourceNSData : SVGKSource
{
    NSData *_rawData;
    NSURL *_effectiveURL;
}

+ (id)sourceFromData:(id)arg1 URLForRelativeLinks:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *effectiveURL; // @synthesize effectiveURL=_effectiveURL;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
- (id)sourceFromRelativePath:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyForAppleDictionaries;

@end
