// eslint-disable
// this is an auto generated file. This will be overwritten

export const onCreateUser = `subscription OnCreateUser {
  onCreateUser {
    id
    owner
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const onUpdateUser = `subscription OnUpdateUser {
  onUpdateUser {
    id
    owner
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const onDeleteUser = `subscription OnDeleteUser {
  onDeleteUser {
    id
    owner
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const onCreateHero = `subscription OnCreateHero {
  onCreateHero {
    id
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      name
      rank
      description
    }
  }
}
`;
export const onUpdateHero = `subscription OnUpdateHero {
  onUpdateHero {
    id
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      name
      rank
      description
    }
  }
}
`;
export const onDeleteHero = `subscription OnDeleteHero {
  onDeleteHero {
    id
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      name
      rank
      description
    }
  }
}
`;
export const onCreateSquad = `subscription OnCreateSquad {
  onCreateSquad {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
    }
  }
}
`;
export const onUpdateSquad = `subscription OnUpdateSquad {
  onUpdateSquad {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
    }
  }
}
`;
export const onDeleteSquad = `subscription OnDeleteSquad {
  onDeleteSquad {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
    }
  }
}
`;
export const onCreateQuest = `subscription OnCreateQuest {
  onCreateQuest {
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
    }
  }
}
`;
export const onUpdateQuest = `subscription OnUpdateQuest {
  onUpdateQuest {
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
    }
  }
}
`;
export const onDeleteQuest = `subscription OnDeleteQuest {
  onDeleteQuest {
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
    }
  }
}
`;
