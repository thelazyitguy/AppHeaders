//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKTheme;
@protocol SSOIdentity;

@interface GDKZeroStateSearchParams : NSObject
{
    _Bool _improvedSearchZeroStateEnabled_30;
    id <SSOIdentity> _identity_8;
    GDKTheme *_theme_5;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme_5;
@property(readonly, nonatomic) _Bool improvedSearchZeroStateEnabled; // @synthesize improvedSearchZeroStateEnabled=_improvedSearchZeroStateEnabled_30;
@property(readonly, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity_8;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentity:(id)arg1 improvedSearchZeroStateEnabled:(_Bool)arg2 theme:(id)arg3;

@end
