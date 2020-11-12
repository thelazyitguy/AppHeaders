//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKSearchFilterToken-Protocol.h"

@class NSString;

@interface GDKFullTextSearchFilterRecord : NSObject <GDKSearchFilterToken>
{
    _Bool _invert;
    NSString *_fullText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool invert; // @synthesize invert=_invert;
@property(readonly, copy, nonatomic) NSString *fullText; // @synthesize fullText=_fullText;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isCompatibleWithToken:(id)arg1;
- (void)applyToQuery:(id)arg1;
@property(readonly, nonatomic) NSString *searchToken;
- (id)initWithFullText:(id)arg1 invert:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
