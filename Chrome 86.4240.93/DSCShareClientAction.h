//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/DSCClientAction.h>

#import <ChromeInternal/DSCStreamCoding-Protocol.h>
#import <ChromeInternal/NSCopying-Protocol.h>

@class NSString;

@interface DSCShareClientAction : DSCClientAction <NSCopying, DSCStreamCoding>
{
    NSString *_title;
    NSString *_body;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)encodeToStream:(id)arg1 error:(id *)arg2;
- (id)initWithStream:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(long long)arg1 gutterIcon:(id)arg2 accessibilityHint:(id)arg3 inlineInjectionModifier:(id)arg4 veInfo:(id)arg5 title:(id)arg6 body:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
