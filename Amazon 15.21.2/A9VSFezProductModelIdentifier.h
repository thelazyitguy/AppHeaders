//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface A9VSFezProductModelIdentifier : NSObject <NSCopying>
{
    int _engineIdentifier;
    NSString *_string;
    NSString *_asin;
}

+ (id)defaultIdentifierForASIN:(id)arg1;
@property(nonatomic) int engineIdentifier; // @synthesize engineIdentifier=_engineIdentifier;
@property(readonly, nonatomic) NSString *asin; // @synthesize asin=_asin;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateString;
- (void)invalidate;
- (id)initWithASIN:(id)arg1 engineIdentifier:(int)arg2;

@end
