//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CommentSortBarViewModel : NSObject
{
    _Bool _isLoading;
    NSString *_identifier;
    unsigned long long _commentSort;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long commentSort; // @synthesize commentSort=_commentSort;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)diffIdentifier;
- (id)initWithIdentifier:(id)arg1;

@end

