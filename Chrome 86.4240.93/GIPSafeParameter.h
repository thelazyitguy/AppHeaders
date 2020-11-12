//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/NSCopying-Protocol.h>

@interface GIPSafeParameter : NSObject <NSCopying>
{
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isUploadSafeType) _Bool uploadSafeType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end
