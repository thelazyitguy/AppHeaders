//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilIterator-Protocol.h"

@protocol JavaUtilListIterator <JavaUtilIterator, JavaObject>
- (void)addWithId:(id)arg1;
- (void)setWithId:(id)arg1;
- (void)remove;
- (int)previousIndex;
- (int)nextIndex;
- (id)previous;
- (_Bool)hasPrevious;
- (id)next;
- (_Bool)hasNext;
@end
