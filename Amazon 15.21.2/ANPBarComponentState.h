//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface ANPBarComponentState : NSObject <NSCopying>
{
    _Bool _visible;
    unsigned long long _autoHideType;
    double _requestHeight;
}

@property(readonly, nonatomic) double requestHeight; // @synthesize requestHeight=_requestHeight;
@property(readonly, nonatomic) unsigned long long autoHideType; // @synthesize autoHideType=_autoHideType;
@property(readonly, nonatomic) _Bool visible; // @synthesize visible=_visible;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithVisible:(_Bool)arg1 autoHideType:(unsigned long long)arg2 requestHeight:(double)arg3;

@end
