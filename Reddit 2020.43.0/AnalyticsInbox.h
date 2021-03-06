//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsInbox : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _tabIsSet;
    _Bool _badge_countIsSet;
    _Bool _is_viewed;
    _Bool _is_viewedIsSet;
    _Bool _is_clicked;
    _Bool _is_clickedIsSet;
    NSString *_id;
    NSString *_tab;
    long long _badge_count;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool is_clickedIsSet; // @synthesize is_clickedIsSet=_is_clickedIsSet;
@property(nonatomic) _Bool is_clicked; // @synthesize is_clicked=_is_clicked;
@property(nonatomic) _Bool is_viewedIsSet; // @synthesize is_viewedIsSet=_is_viewedIsSet;
@property(nonatomic) _Bool is_viewed; // @synthesize is_viewed=_is_viewed;
@property(nonatomic) _Bool badge_countIsSet; // @synthesize badge_countIsSet=_badge_countIsSet;
@property(nonatomic) long long badge_count; // @synthesize badge_count=_badge_count;
@property(nonatomic) _Bool tabIsSet; // @synthesize tabIsSet=_tabIsSet;
@property(copy, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetIs_clicked;
- (void)unsetIs_viewed;
- (void)unsetBadge_count;
- (void)unsetTab;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 tab:(id)arg2 badge_count:(long long)arg3 is_viewed:(_Bool)arg4 is_clicked:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

