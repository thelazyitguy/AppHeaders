//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface IDTableLocation : NSObject <NSCopying>
{
    long long _row;
    long long _col;
}

+ (id)locationZero;
+ (id)locationWithRow:(long long)arg1 col:(long long)arg2;
@property long long col; // @synthesize col=_col;
@property long long row; // @synthesize row=_row;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRow:(long long)arg1 col:(long long)arg2;
- (id)init;

@end

